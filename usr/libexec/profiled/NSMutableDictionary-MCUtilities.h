//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MCUtilities)
- (void)MCSanitizeRestrictions;	// IMP=0x00100000000178ac
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;	// IMP=0x0010000000017205
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;	// IMP=0x0010000000016fd5
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;	// IMP=0x0010000000016cd1
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;	// IMP=0x00100000000169cd
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x00100000000166c9
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;	// IMP=0x00100000000163c5
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;	// IMP=0x001000000001607e
- (void)MCDeleteBoolRestriction:(id)arg1;	// IMP=0x0010000000015fca
- (void)MCSetBoolRestriction:(id)arg1 value:(_Bool)arg2;	// IMP=0x0010000000015d06
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000015ced
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;	// IMP=0x0010000000015a59
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;	// IMP=0x001000000001577c
@end

