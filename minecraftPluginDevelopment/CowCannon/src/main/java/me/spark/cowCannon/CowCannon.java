package me.spark.cowCannon;

import org.bukkit.plugin.java.JavaPlugin;

public final class CowCannon extends JavaPlugin {

    public static CowCannon getInstance() {
        return getPlugin(CowCannon.class);
    }

    @Override
    public void onEnable() {
        // Plugin startup logic
        getLogger().info("@ cow cannon is enabled");

        getServer().getPluginManager().registerEvents(new EntityListener(), this);

        if (getCommand("cow") != null) {
            CowCommand command = new CowCommand();

            getCommand("cow").setExecutor(command);
            getCommand("cow").setTabCompleter(command);
        }
    }

    @Override
    public void onDisable() {
        // Plugin shutdown logic
        getLogger().info("@ cow cannon is disabled");
    }
}
