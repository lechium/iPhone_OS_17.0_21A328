//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface AVBehaviorStorage : NSObject
{
    id _AVKitOwner;	// 8 = 0x8
    NSMapTable *_behaviorsAndBehaviorContexts;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011c57d
@property(readonly, nonatomic) NSMapTable *behaviorsAndBehaviorContexts; // @synthesize behaviorsAndBehaviorContexts=_behaviorsAndBehaviorContexts;
@property(nonatomic) __weak id AVKitOwner; // @synthesize AVKitOwner=_AVKitOwner;
- (id)behaviorContextOfClass:(Class)arg1;	// IMP=0x000000000011c3db
- (void)enumerateAllBehaviorContextsImplementingSelector:(SEL)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000011c333
- (void)enumerateAllBehaviorContextsConformingToProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000011c27e
- (void)enumerateAllBehaviorContextsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011c127
- (id)behaviorOfClass:(Class)arg1;	// IMP=0x000000000011bfb6
- (void)enumerateAllBehaviorsConformingToProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000011bf01
- (void)enumerateAllBehaviorsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011bdaa
- (void)removeBehavior:(id)arg1;	// IMP=0x000000000011bc44
- (void)addBehavior:(id)arg1;	// IMP=0x000000000011b9ec
- (id)behaviors;	// IMP=0x000000000011b972
- (id)initWithAVKitOwner:(id)arg1;	// IMP=0x000000000011b8e4

@end

