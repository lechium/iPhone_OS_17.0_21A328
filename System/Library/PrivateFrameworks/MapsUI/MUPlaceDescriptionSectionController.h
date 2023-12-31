//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUExpandableBlurbView, MUPlaceDescriptionConfiguration, MUPlaceFooterAtributionViewModel, MUPlaceSectionView;
@protocol MUPlaceDescriptionSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceDescriptionSectionController : MUPlaceSectionController
{
    MUPlaceDescriptionConfiguration *_configuration;	// 8 = 0x8
    MUExpandableBlurbView *_blurbView;	// 16 = 0x10
    MUPlaceSectionView *_sectionView;	// 24 = 0x18
    MUPlaceFooterAtributionViewModel *_footerViewModel;	// 32 = 0x20
    id <MUPlaceDescriptionSectionControllerDelegate> _actionDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000112fc1
@property(nonatomic) __weak id <MUPlaceDescriptionSectionControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (_Bool)isImpressionable;	// IMP=0x0000000000112f8c
- (int)analyticsModuleType;	// IMP=0x0000000000112f81
- (id)infoCardChildPossibleActions;	// IMP=0x0000000000112f33
- (void)_attributionTapped;	// IMP=0x0000000000112e09
- (id)sectionFooterViewModel;	// IMP=0x0000000000112c6f
- (id)sectionHeaderViewModel;	// IMP=0x0000000000112bf7
- (id)sectionView;	// IMP=0x0000000000112be2
- (void)_setupTextBlurb;	// IMP=0x0000000000112883
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000112731

@end

