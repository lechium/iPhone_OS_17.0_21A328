//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, Route, UIFocusEffect, UIView;
@protocol CarAlternateRouteFocusItemDelegate, UIFocusEnvironment, UIFocusItemContainer;

@interface CarAlternateRouteFocusItem : NSObject
{
    id <CarAlternateRouteFocusItemDelegate> _delegate;	// 8 = 0x8
    UIView *_containingView;	// 16 = 0x10
    _Bool _focused;	// 24 = 0x18
    Route *_route;	// 32 = 0x20
    struct CGRect _frame;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000bcec59
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
@property(readonly, nonatomic) __weak Route *route; // @synthesize route=_route;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000bceb88
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0010000000bceb80
- (void)updateFocusIfNeeded;	// IMP=0x0010000000bceb39
- (void)setNeedsFocusUpdate;	// IMP=0x0010000000bceae3
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (id)initWithRoute:(id)arg1 containingView:(id)arg2 frame:(struct CGRect)arg3 delegate:(id)arg4;	// IMP=0x0010000000bce8bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

