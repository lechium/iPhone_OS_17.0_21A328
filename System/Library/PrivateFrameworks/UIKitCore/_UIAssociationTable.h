//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIAssociationTable : NSObject
{
    NSMapTable *_leftToRightHashTables;	// 8 = 0x8
    NSMapTable *_rightToLeftHashTables;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000014d6c0f
- (_Bool)hasRightValuesForLeftValue:(id)arg1;	// IMP=0x00000000014d6bd8
- (_Bool)hasLeftValuesForRightValue:(id)arg1;	// IMP=0x00000000014d6ba1
- (id)rightValueEnumerableForLeftValue:(id)arg1;	// IMP=0x00000000014d6b8b
- (id)leftValueEnumerableForRightValue:(id)arg1;	// IMP=0x00000000014d6b75
- (id)rightValuesForLeftValue:(id)arg1;	// IMP=0x00000000014d6afc
- (id)leftValuesForRightValue:(id)arg1;	// IMP=0x00000000014d6a83
- (id)rightValueEnumerable;	// IMP=0x00000000014d6a75
- (id)leftValueEnumerable;	// IMP=0x00000000014d6a67
- (id)rightValues;	// IMP=0x00000000014d6a59
- (id)leftValues;	// IMP=0x00000000014d6a4b
- (_Bool)isEmpty;	// IMP=0x00000000014d6a2e
- (void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;	// IMP=0x00000000014d68fc
- (void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;	// IMP=0x00000000014d67bd
- (id)description;	// IMP=0x00000000014d6740
- (id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2;	// IMP=0x00000000014d666b

@end

