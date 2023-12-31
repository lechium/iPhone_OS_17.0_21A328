//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/SearchUICardViewController.h>

@class NSString, SUICKPFeedbackAdapter;
@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@interface SearchUICardViewController (CRKCardViewControlling)
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;	// IMP=0x002000000000558b
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x002000000000544b
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x002000000000530b
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;	// IMP=0x00200000000051c7
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;	// IMP=0x002000000000512a
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;	// IMP=0x0020000000005063
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;	// IMP=0x0020000000004f9c
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;	// IMP=0x0020000000004e5c
- (void)cardSectionView:(id)arg1 willProcessEngagementFeedback:(id)arg2;	// IMP=0x0020000000004d95
- (void)presentViewControllerForCard:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00200000000046fc
- (void)willDismissViewController:(id)arg1;	// IMP=0x0020000000004652
- (void)presentViewController:(id)arg1;	// IMP=0x00200000000045a8
@property(retain, nonatomic) SUICKPFeedbackAdapter *defaultFeedbackAdapter;
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property(retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource;

// Remaining properties
@property(retain, nonatomic) id <CRCard> card;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

