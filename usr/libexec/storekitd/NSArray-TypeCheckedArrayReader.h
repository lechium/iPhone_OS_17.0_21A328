//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (TypeCheckedArrayReader)
- (id)_tcr_associatedReader;	// IMP=0x001000000000eed6
- (id)tcr_stringEnumerator;	// IMP=0x001000000000ee77
- (id)tcr_numberEnumerator;	// IMP=0x001000000000ee18
- (id)tcr_dictionaryEnumerator;	// IMP=0x001000000000edb9
@property(readonly) NSString *tcr_keyPath;
- (id)lib_batchedWithMaxSize:(unsigned long long)arg1;	// IMP=0x00100000000890f6
- (id)lib_filterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000088eee
- (id)lib_mapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000088daf
- (id)lib_flatMapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000088b81
- (id)lib_firstResultApplyingTransform:(CDUnknownBlockType)arg1;	// IMP=0x0010000000088a23
- (id)lib_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000088954
- (id)lib_categorizeItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008869e
@end

