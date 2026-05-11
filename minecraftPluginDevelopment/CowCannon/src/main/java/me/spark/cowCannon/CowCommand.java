package me.spark.cowCannon;

import org.bukkit.ChatColor;
import org.bukkit.command.Command;
import org.bukkit.command.CommandExecutor;
import org.bukkit.command.CommandSender;
import org.bukkit.command.TabExecutor;
import org.bukkit.entity.Cow;
import org.bukkit.entity.Player;
import org.bukkit.metadata.FixedMetadataValue;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class CowCommand implements CommandExecutor, TabExecutor {

    @Override
    public boolean onCommand(@NotNull CommandSender sender, @NotNull Command command, @NotNull String label, @NotNull String @NotNull [] args) {
        if (!(sender instanceof Player)) {
            sender.sendMessage("&bOnly players can use this command");

            return true;
        }

        if (args.length > 1) {
            return false;
        }

        //         arg[0]   arg[1]      arg[2]
        // cow     hlw      world       pretty
        boolean isBaby = false;
        if (args.length == 1 && args[0].equalsIgnoreCase("baby")) isBaby = true;

        Player player = (Player) sender;

        Cow cow = player.getWorld().spawn(player.getLocation(), Cow.class);

        if (isBaby) cow.setBaby();

        cow.setMetadata("CowCannon", new FixedMetadataValue(CowCannon.getInstance(), true));
        cow.setCustomName(ChatColor.RED + "Milk Me");
        cow.setCustomNameVisible(true);

        return true;
    }

    @Override
    public @Nullable List<String> onTabComplete(@NotNull CommandSender commandSender, @NotNull Command command, @NotNull String s, @NotNull String @NotNull [] args) {
        if (args.length == 1) {
            return Arrays.asList("baby");
        }

        return new ArrayList<>();
    }
}
