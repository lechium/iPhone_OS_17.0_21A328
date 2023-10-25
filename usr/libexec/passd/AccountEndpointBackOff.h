//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountEndpointBackOff
{
}

+ (id)_predicateForAccountType:(unsigned long long)arg1 accountPID:(long long)arg2;	// IMP=0x00400000004231f6
+ (id)_predicateForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountPID:(long long)arg3;	// IMP=0x001000000042303d
+ (void)deleteEntriesForAccountType:(unsigned long long)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000422f00
+ (id)anyInDatabase:(id)arg1 forAccountType:(unsigned long long)arg2 accountPID:(long long)arg3;	// IMP=0x0010000000422e71
+ (id)anyInDatabase:(id)arg1 forAccountType:(unsigned long long)arg2 endpointType:(unsigned long long)arg3 accountPID:(long long)arg4;	// IMP=0x0010000000422dd7
+ (id)insertIfNotExistsForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000422af4
+ (id)databaseTable;	// IMP=0x0010000000422ae7
- (unsigned long long)endpointType;	// IMP=0x00400000004236b2
- (unsigned long long)accountType;	// IMP=0x0010000000423667
- (id)nextPossibleFetchDate;	// IMP=0x0010000000423619
- (void)increaseBackoffLevel;	// IMP=0x0010000000423356
- (id)initWithForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000422c8d

@end
