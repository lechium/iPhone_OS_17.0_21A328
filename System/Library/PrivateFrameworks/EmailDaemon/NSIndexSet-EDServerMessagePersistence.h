//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexSet.h>

@class NSString;

@interface NSIndexSet (EDServerMessagePersistence)
@property(readonly, nonatomic) NSString *ed_logDescription;
- (id)ed_uidQueryExpressionWithTableName:(id)arg1;	// IMP=0x0030000000189f46
@property(readonly, nonatomic) NSString *ed_uidQueryExpression;
- (id)ed_nextRangesWithRangeCountLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2;	// IMP=0x0030000000189da9
- (void)ed_enumerateUIDsWithLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2 queryRangeCountLimit:(unsigned long long)arg3 batchLimit:(unsigned long long)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x0030000000189768
- (void)ed_enumerateUIDsWithLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x003000000018973d
@end

