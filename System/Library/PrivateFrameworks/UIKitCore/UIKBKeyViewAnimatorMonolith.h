//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimatorMonolith
{
    NSMutableDictionary *_selectedKeyTimestamps;	// 8 = 0x8
    NSMutableDictionary *_transitionCompletions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b6d222
- (void)reset;	// IMP=0x0000000000b6d1d9
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b6ceb3
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b6cbea
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;	// IMP=0x0000000000b6cb11
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;	// IMP=0x0000000000b6caf5
- (void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned long long)arg2;	// IMP=0x0000000000b6be2a
- (void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b6ba4e
- (void)addTransitionCompletion:(CDUnknownBlockType)arg1 forKeyName:(id)arg2;	// IMP=0x0000000000b6b96b
- (long long)_transitionFromState:(int)arg1 toState:(int)arg2;	// IMP=0x0000000000b6b8eb
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;	// IMP=0x0000000000b6b6d3
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000b6b6cd
- (unsigned long long)controlStateForKeyState:(int)arg1;	// IMP=0x0000000000b6b69f
- (Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3;	// IMP=0x0000000000b6b49d
- (_Bool)shouldPurgeKeyViews;	// IMP=0x0000000000b6b48b
- (id)init;	// IMP=0x0000000000b6b408

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

