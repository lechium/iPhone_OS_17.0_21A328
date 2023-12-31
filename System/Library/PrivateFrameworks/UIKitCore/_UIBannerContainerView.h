//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIBannerContainerView : UIView
{
    NSMutableArray *_banners;	// 8 = 0x8
    NSMutableArray *_constraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010c4377
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSMutableArray *banners; // @synthesize banners=_banners;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000010c4147
- (void)_setBanner:(id)arg1 visible:(_Bool)arg2 alongsideAnimations:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000010c3aa7
- (id)_bannerAnimationToVisible:(_Bool)arg1 hiddenValue:(id)arg2 visibleValue:(id)arg3 withKeyPath:(id)arg4;	// IMP=0x00000000010c39ad
- (void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000010c37eb
- (void)statusBarFrameDidChange:(id)arg1;	// IMP=0x00000000010c37d9
- (void)updateConstraints;	// IMP=0x00000000010c35c4
- (void)_presentBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000010c2ea3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000010c2d96

@end

