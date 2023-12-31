//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PBCodable (BRCProtocolBufferAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x0010000000083f83
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x0010000000083f07
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x0010000000083eb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

