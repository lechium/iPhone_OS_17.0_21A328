//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISpringLoadedGestureRecognizer, UIView;
@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface UISpringLoadedInteractionContextImpl : NSObject
{
    id targetItem;	// 8 = 0x8
    UIView *targetView;	// 16 = 0x10
    UIView *overrideTargetView;	// 24 = 0x18
    id overrideTargetItem;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    UISpringLoadedGestureRecognizer *_currentRecognizer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000070e7af
@property(nonatomic) __weak UISpringLoadedGestureRecognizer *currentRecognizer; // @synthesize currentRecognizer=_currentRecognizer;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id overrideTargetItem; // @synthesize overrideTargetItem;
@property(retain, nonatomic) UIView *overrideTargetView; // @synthesize overrideTargetView;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView;
@property(retain, nonatomic) id targetItem; // @synthesize targetItem;
@property(readonly, nonatomic) id <UIDropSession> dropSession;
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x000000000070e634

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

