//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ModalCardHeaderView, NSString, UIViewController;
@protocol RoutePlanningDataCoordination;

@interface RoutePlanningWrapperViewController
{
    id <RoutePlanningDataCoordination> _dataCoordinator;	// 8 = 0x8
    ModalCardHeaderView *_modalHeaderView;	// 16 = 0x10
    UIViewController *_wrappedViewController;	// 24 = 0x18
}

+ (_Bool)wantsDefaultHeaderContentViews;	// IMP=0x002000000072f119
- (void).cxx_destruct;	// IMP=0x002000000072feae
@property(retain, nonatomic) UIViewController *wrappedViewController; // @synthesize wrappedViewController=_wrappedViewController;
@property(retain, nonatomic) ModalCardHeaderView *modalHeaderView; // @synthesize modalHeaderView=_modalHeaderView;
@property(readonly, nonatomic) __weak id <RoutePlanningDataCoordination> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
- (void)_doneTapped:(id)arg1;	// IMP=0x001000000072fde0
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000072fdce
- (void)_setupChildViewControllerIfNeeded:(id)arg1;	// IMP=0x001000000072f940
- (void)viewDidLoad;	// IMP=0x001000000072f121
- (id)initWithDataCoordination:(id)arg1;	// IMP=0x001000000072f02d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

