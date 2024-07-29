#include <iostream>
#include "npc_ai.h"
#include "difficulty.h"
#include "performance.h"

int main() {
    std::cout << "Game starting..." << std::endl;

    // Initialize game components
    EnhancedNPC npc;
    DifficultyManager difficultyManager;
    PerformanceMonitor performanceMonitor;

    // Game loop
    while (true) {
        // Update NPC behavior
        npc.UpdateBehavior();

        // Adjust difficulty
        difficultyManager.UpdateDifficulty();

        // Monitor performance
        performanceMonitor.MonitorPerformance();
        
        // Game logic and rendering
    }

    return 0;
}
