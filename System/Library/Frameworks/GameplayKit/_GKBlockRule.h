//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKRule.h"

__attribute__((visibility("hidden")))
@interface _GKBlockRule : GKRule
{
    CDUnknownBlockType _predicate;	// 8 = 0x8
    CDUnknownBlockType _action;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000033cf8
- (void)performActionWithSystem:(id)arg1;	// IMP=0x0000000000033cd8
- (_Bool)evaluatePredicateWithSystem:(id)arg1;	// IMP=0x0000000000033cb6
- (id)initWithPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033c04

@end
