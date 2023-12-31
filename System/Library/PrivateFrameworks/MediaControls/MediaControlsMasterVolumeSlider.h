//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UINotificationFeedbackGenerator, UIView;
@protocol MediaControlsMasterVolumeSliderDelegate;

__attribute__((visibility("hidden")))
@interface MediaControlsMasterVolumeSlider
{
    UIView *_growingThumbView;	// 8 = 0x8
    double _forcePercent;	// 16 = 0x10
    float _initialX;	// 24 = 0x18
    _Bool _syncingEnabled;	// 28 = 0x1c
    id <MediaControlsMasterVolumeSliderDelegate> _delegate;	// 32 = 0x20
    long long _syncState;	// 40 = 0x28
    UIImpactFeedbackGenerator *_positiveFeedbackGenerator;	// 48 = 0x30
    UINotificationFeedbackGenerator *_negativeFeedbackGenerator;	// 56 = 0x38
    UILongPressGestureRecognizer *_longPressRecognizer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005c664
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UINotificationFeedbackGenerator *negativeFeedbackGenerator; // @synthesize negativeFeedbackGenerator=_negativeFeedbackGenerator;
@property(retain, nonatomic) UIImpactFeedbackGenerator *positiveFeedbackGenerator; // @synthesize positiveFeedbackGenerator=_positiveFeedbackGenerator;
@property(nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property(nonatomic) __weak id <MediaControlsMasterVolumeSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000005c504
- (void)layoutSubviews;	// IMP=0x000000000005c2b6
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000005c258
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005c1bb
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005bed9
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000005bd51
- (void)shrinkThumbAfterDelay:(double)arg1;	// IMP=0x000000000005ba8b
- (void)handleLongPress:(id)arg1;	// IMP=0x000000000005b9b6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005b7ad
- (id)createThumbView;	// IMP=0x000000000005b734
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005b4dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

