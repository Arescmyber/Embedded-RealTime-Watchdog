# 🛡️ Embedded Real-Time Watchdog (C)

**Concept :** Architecture de sécurité logicielle de bas niveau (Kill-switch).
**Objectif :** Surveiller l'exécution d'un processus stochastique et garantir le respect d'une contrainte de temps réel strict.

**Fonctionnement :**
Le code simule une tâche (ex: rendu d'image, calcul) dont le temps d'exécution varie. Un garde-fou matériel (`MAX_LATENCY_MS 5`) surveille l'opération. Si la tâche dépasse la limite stricte de 5 ms, le Watchdog intercepte le thread et exécute une instruction pour tuer le processus instantanément, mettant le système en sécurité.
