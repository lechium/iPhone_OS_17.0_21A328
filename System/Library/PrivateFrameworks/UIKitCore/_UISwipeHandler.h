//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISwipeActionController, _UIStatesFeedbackGenerator, _UISwipeActionPanGestureRecognizer, _UISwipeDismissalGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UISwipeHandler : NSObject
{
    struct {
        unsigned int didProcessBegan:1;
    } _flags;	// 8 = 0x8
    _UISwipeDismissalGestureRecognizer *_dismissalGestureRecognizer;	// 16 = 0x10
    _UISwipeActionPanGestureRecognizer *_swipeActionPanRecognizer;	// 24 = 0x18
    CDStruct_324b76a9 _currentSwipeConfig;	// 32 = 0x20
    unsigned long long _currentSwipeState;	// 64 = 0x40
    _Bool _resetSwipeWhileInitiating;	// 72 = 0x48
    double _initialTranslation;	// 80 = 0x50
    double _confirmationTranslationAdjustment;	// 88 = 0x58
    _Bool _active;	// 96 = 0x60
    _UIStatesFeedbackGenerator *_swipeFeedbackGenerator;	// 104 = 0x68
    UISwipeActionController *_swipeController;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000011f9d71
@property(nonatomic) __weak UISwipeActionController *swipeController; // @synthesize swipeController=_swipeController;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator; // @synthesize swipeFeedbackGenerator=_swipeFeedbackGenerator;
@property(readonly, nonatomic) unsigned long long currentSwipeState; // @synthesize currentSwipeState=_currentSwipeState;
- (void)_moveSwipedItemToOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3 isTracking:(_Bool)arg4;	// IMP=0x00000000011f9c78
- (CDStruct_b06b0113)_currentSwipeInfoWithTargetOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3;	// IMP=0x00000000011f9a22
@property(readonly, nonatomic) CDStruct_324b76a9 currentSwipeConfig;
- (_Bool)_delegateWantsToDismissOnTouchDownForGestureRecognizer:(id)arg1;	// IMP=0x00000000011f994f
- (void)_cancelExistingSwipe;	// IMP=0x00000000011f98c4
- (void)_cancelExistingSwipeForGestureBeganIfNecessary:(id)arg1;	// IMP=0x00000000011f9851
- (void)resetSwipe;	// IMP=0x00000000011f981e
- (void)initiateSwipeWithDirection:(unsigned long long)arg1 configuration:(id)arg2 location:(struct CGPoint)arg3 userInitiated:(_Bool)arg4;	// IMP=0x00000000011f96e3
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x00000000011f9396
- (void)_swipeRecognizerChanged:(id)arg1;	// IMP=0x00000000011f8d13
- (void)_swipeRecognizerBegan:(id)arg1;	// IMP=0x00000000011f8abb
- (void)_swipeRecognizerDidRecognize:(id)arg1;	// IMP=0x00000000011f890a
- (unsigned long long)_directionForGestureRecognizer:(id)arg1;	// IMP=0x00000000011f8837
- (void)_dismissalRecognizerDidRecognize:(id)arg1;	// IMP=0x00000000011f87f4
- (_Bool)gestureRecognizerShouldDismissForTouchUp:(id)arg1;	// IMP=0x00000000011f8736
- (_Bool)gestureRecognizerShouldDismissForTouchDown:(id)arg1;	// IMP=0x00000000011f8724
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000011f85a8
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000011f84ef
@property(readonly, nonatomic, getter=isInteracting) _Bool interacting;
- (void)dealloc;	// IMP=0x00000000011f83ff
- (void)_setUp;	// IMP=0x00000000011f8255
- (id)initWithSwipeController:(id)arg1;	// IMP=0x00000000011f81d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
