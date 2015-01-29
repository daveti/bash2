#!../bash --cpu-affinity 1

# This program should be bound to core 1
# even though it has tons of opportunities to
# be rescheduled because of sleep()
# Once the testing program is running, get the pid from the output.
# Then run 'taskset -p pid' to confirm the CPU affinity
# In this case, the CPU affinity mask should be '2'
# Jan 29, 2015
# daveti

./cpu_affinity_test
