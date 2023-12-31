//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PBObjectToObjectCoercion : NSObject
{
    Class _theClass;	// 8 = 0x8
    NSMutableDictionary *_blockByClass;	// 16 = 0x10
    NSMutableOrderedSet *_orderedClassNames;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002731e
@property(retain, nonatomic) NSMutableOrderedSet *orderedClassNames; // @synthesize orderedClassNames=_orderedClassNames;
@property(retain, nonatomic) NSMutableDictionary *blockByClass; // @synthesize blockByClass=_blockByClass;
@property(retain, nonatomic) Class theClass; // @synthesize theClass=_theClass;
- (id)coerceObject:(id)arg1 toObjectOfClass:(Class)arg2 outError:(id *)arg3;	// IMP=0x0000000000026f9c
- (_Bool)canCoerceToObjectOfClass:(Class)arg1;	// IMP=0x0000000000026e50
- (id)availableClasses;	// IMP=0x0000000000026e3a
- (void)addCoercionToClass:(Class)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026da7
- (id)initWithClass:(Class)arg1;	// IMP=0x0000000000026cfb

@end

