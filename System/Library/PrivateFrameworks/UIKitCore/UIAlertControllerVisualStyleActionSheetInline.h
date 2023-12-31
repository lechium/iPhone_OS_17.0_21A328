//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAlertControllerVisualStyleActionSheet.h"

@class UIView, UIVisualEffectView, _UIPreviewPresentationEffectView;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet
{
    _Bool _actionsReversed;	// 8 = 0x8
    UIView *_headerView;	// 16 = 0x10
    UIVisualEffectView *_revealEffectView;	// 24 = 0x18
    _UIPreviewPresentationEffectView *_sourceViewSnapshot;	// 32 = 0x20
}

+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;	// IMP=0x00600000017951d8
+ (long long)interfaceActionPresentationStyle;	// IMP=0x00600000017937dd
- (void).cxx_destruct;	// IMP=0x0000000001796300
@property(retain, nonatomic) _UIPreviewPresentationEffectView *sourceViewSnapshot; // @synthesize sourceViewSnapshot=_sourceViewSnapshot;
@property(retain, nonatomic) UIVisualEffectView *revealEffectView; // @synthesize revealEffectView=_revealEffectView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool actionsReversed; // @synthesize actionsReversed=_actionsReversed;
- (_Bool)placementAvoidsKeyboard;	// IMP=0x0000000001796269
- (_Bool)_shouldReverseActions;	// IMP=0x0000000001796259
- (id)dimmingViewForAlertController:(id)arg1;	// IMP=0x00000000017961f5
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;	// IMP=0x00000000017961ed
- (id)tintColorForAlertController:(id)arg1;	// IMP=0x00000000017961d4
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;	// IMP=0x0000000001795147
- (_Bool)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;	// IMP=0x000000000179513b
- (double)minimumWidth;	// IMP=0x0000000001795132
- (long long)permittedActionLayoutDirection;	// IMP=0x0000000001795127
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;	// IMP=0x00000000017950e8
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000001794072
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000001793c02
- (struct CGRect)_sourceRectForAlertController:(id)arg1 inContainerView:(id)arg2;	// IMP=0x0000000001793a0c
- (_Bool)shouldPreserveRespondersAcrossWindows;	// IMP=0x0000000001793a04
- (_Bool)shouldOccludeDuringPresentation;	// IMP=0x00000000017939fc
- (double)_actionDescriptiveTextFontSize;	// IMP=0x00000000017938dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000179387a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000017937e8

@end

