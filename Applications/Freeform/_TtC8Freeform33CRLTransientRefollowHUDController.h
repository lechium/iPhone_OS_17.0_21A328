//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSLayoutConstraint, NSString, NSTimer, UIGestureRecognizer, UIView;
@protocol _TtP8Freeform23CRLStatusHUDManaging_mi_;

@interface _TtC8Freeform33CRLTransientRefollowHUDController : NSObject
{
    MISSING_TYPE *followingParticipant;	// 8 = 0x8
    MISSING_TYPE *hudView;	// 16 = 0x10
    MISSING_TYPE *containerView;	// 24 = 0x18
    MISSING_TYPE *manager;	// 32 = 0x20
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *type;	// 48 = 0x30
    MISSING_TYPE *minimumShowDuration;	// 56 = 0x38
    MISSING_TYPE *maximumShowDuration;	// 64 = 0x40
    MISSING_TYPE *timeStartedShowing;	// 778396526 = 0x2e65636e
    MISSING_TYPE *hideTimer;	// 1919907685 = 0x726f7765
    MISSING_TYPE *shouldAutoHide;	// 1701995880 = 0x65726568
    MISSING_TYPE *showing;	// 12 = 0xc
    MISSING_TYPE *animating;	// 24 = 0x18
    MISSING_TYPE *hiding;	// 15401472 = 0xeb0200
    MISSING_TYPE *accessibilityAnnouncement;	// 1937330991 = 0x7379532f
    MISSING_TYPE *swipable;	// 1919052108 = 0x7262694c
    MISSING_TYPE *swipeGestureRecognizer;	// 1835102790 = 0x6d617246
    MISSING_TYPE *hideOnTouch;	// 1278178155 = 0x4c2f736b
    MISSING_TYPE *setupDone;	// 1702061426 = 0x65736572
    MISSING_TYPE *height;	// 778989417 = 0x2e6e6f69
    MISSING_TYPE *width;	// 1919907685 = 0x726f7765
    MISSING_TYPE *heightConstraint;	// 1917873006 = 0x72506b6e
    MISSING_TYPE *constraints;	// 1769234804 = 0x69746174
    MISSING_TYPE *refollowClickedHandler;	// 12 = 0xc
    MISSING_TYPE *canvasWidth;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_participantColor;	// 0 = 0x0
    MISSING_TYPE *resumeFollowingString;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$__label;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000009cc980
- (id)init;	// IMP=0x00100000009cc920
- (id)initWithManager:(id)arg1 followingParticipant:(id)arg2 delegate:(id)arg3 canvasWidth:(double)arg4 resumeButtonClickedHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000009cc860
- (void)resumeButtonClickedWithSender:(id)arg1;	// IMP=0x00100000009cc750
@property(nonatomic, retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint;
@property(nonatomic) double height; // @synthesize height;
@property(nonatomic) _Bool hideOnTouch; // @synthesize hideOnTouch;
- (void)swipedWithSender:(id)arg1;	// IMP=0x00100000009cadd0
@property(nonatomic, retain) UIGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer;
@property(nonatomic) _Bool swipable; // @synthesize swipable;
@property(nonatomic, copy) NSString *accessibilityAnnouncement;
@property(nonatomic) _Bool hiding; // @synthesize hiding;
@property(nonatomic) _Bool animating; // @synthesize animating;
@property(nonatomic) _Bool showing; // @synthesize showing;
@property(nonatomic, retain) NSTimer *hideTimer; // @synthesize hideTimer;
@property(nonatomic, readonly) double timeLeftToShow;
@property(nonatomic, copy) NSDate *timeStartedShowing;
@property(nonatomic) double maximumShowDuration; // @synthesize maximumShowDuration;
@property(nonatomic) double minimumShowDuration; // @synthesize minimumShowDuration;
@property(nonatomic, readonly) NSString *message;
@property(nonatomic, readonly) long long type; // @synthesize type;
@property(nonatomic) __weak id <_TtP8Freeform23CRLStatusHUDManaging_mi_> manager; // @synthesize manager;
@property(nonatomic, retain) UIView *containerView; // @synthesize containerView;
@property(nonatomic, retain) UIView *hudView; // @synthesize hudView;

@end

