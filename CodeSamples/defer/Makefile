# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
#
# Copyright (c) 2008 Paul E. McKenney, IBM Corporation.

all: gettimestamp gettimestampmp rcu rcu64 rcu_lock rcu_lock_percpu rcu_nest rcu_nest_qs rcu_qs rcu_ts

gettimestamp: gettimestamp.c ../api.h rcutorture.h
	cc -g -o gettimestamp -DTEST gettimestamp.c -lpthread

gettimestampmp: gettimestampmp.c ../api.h rcutorture.h
	cc -g -o gettimestampmp -DTEST gettimestampmp.c -lpthread

rcu: rcu.c rcu.h ../api.h rcutorture.h
	cc -g -o rcu -DTEST rcu.c -lpthread

rcu64: rcu64.c rcu64.h ../api.h rcutorture.h
	cc -g -o rcu64 -DTEST rcu64.c -lpthread

rcu_lock: rcu_lock.c rcu_lock.h ../api.h rcutorture.h
	cc -g -o rcu_lock -DTEST rcu_lock.c -lpthread

rcu_lock_percpu: rcu_lock_percpu.c rcu_lock_percpu.h ../api.h rcutorture.h
	cc -g -o rcu_lock_percpu -DTEST rcu_lock_percpu.c -lpthread

rcu_nest: rcu_nest.c rcu_nest.h ../api.h rcutorture.h
	cc -g -o rcu_nest -DTEST rcu_nest.c -lpthread

rcu_nest_qs: rcu_nest_qs.c rcu_nest_qs.h ../api.h rcutorture.h
	cc -g -o rcu_nest_qs -DTEST rcu_nest_qs.c -lpthread

rcu_qs: rcu_qs.c rcu_qs.h ../api.h rcutorture.h
	cc -g -o rcu_qs -DTEST rcu_qs.c -lpthread

rcu_ts: rcu_ts.c rcu_ts.h ../api.h rcutorture.h
	cc -g -o rcu_ts -DTEST rcu_ts.c -lpthread