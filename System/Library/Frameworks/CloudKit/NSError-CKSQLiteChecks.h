//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CKSQLiteChecks)
+ (_Bool)CKIsForeignKeyConstraintError:(id)arg1;	// IMP=0x00200000000a5c3b
+ (_Bool)CKIsUniqueConstraintError:(id)arg1;	// IMP=0x00200000000a5bda
+ (_Bool)CKIsConstraintError:(id)arg1;	// IMP=0x00200000000a5b86
+ (_Bool)CKIsNoUniqueRowError:(id)arg1;	// IMP=0x00200000000a5b00
+ (_Bool)CKIsNoMatchingRowError:(id)arg1;	// IMP=0x00200000000a5a7a
+ (_Bool)CKIsDiskFullError:(id)arg1;	// IMP=0x00200000000a5a26
+ (_Bool)CKIsCorruptDatabaseError:(id)arg1;	// IMP=0x00200000000a59d2
+ (id)CKErrorFromErrno;	// IMP=0x00200000000c8a28
+ (id)CKErrorWithPOSIXCode:(int)arg1;	// IMP=0x00200000000c8930
@property(readonly, nonatomic) int CKSQLiteExtendedCode;
@property(readonly, nonatomic) int CKSQLiteCode;
- (_Bool)CKIsCKSQLiteError;	// IMP=0x00100000000a6064
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00100000000c8acb
- (_Bool)CKIsPOSIXErrorCode:(long long)arg1;	// IMP=0x00100000000c8a52
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00100000000cab3c
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000001f572c
@property(readonly, nonatomic, getter=isComparisonError) _Bool comparisonError;
- (id)CKItemErrorForID:(id)arg1;	// IMP=0x0010000000258898
- (id)CKErrorScopedToZoneIDs:(id)arg1;	// IMP=0x001000000025858d
- (_Bool)CKHasTopLevelUnderlyingError;	// IMP=0x0010000000258474
- (_Bool)CKHasCKErrorInUnderlyingErrors;	// IMP=0x00100000002580b8
- (_Bool)CKIsCKError;	// IMP=0x001000000025801e
- (_Bool)CKIsObjectNotFoundError;	// IMP=0x0010000000257fa7
- (_Bool)CKIsNotFoundError;	// IMP=0x0010000000257eef
- (id)CKClientSuitableErrorSpecificUserInfo;	// IMP=0x0010000000257e0f
- (id)CKClientSuitableUnderlyingError;	// IMP=0x0010000000257b9c
- (id)CKClientSuitableError;	// IMP=0x00100000002570db
@end
