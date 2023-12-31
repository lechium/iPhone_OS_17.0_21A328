//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPReport, UINavigationController, UIViewController;

@interface RAPDirectionsReportContaineeViewController
{
    unsigned long long _context;	// 8 = 0x8
    RAPReport *_report;	// 16 = 0x10
    UIViewController *_contentViewController;	// 24 = 0x18
    UINavigationController *_navController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000624d9b
- (void)rapRouteListViewController:(id)arg1 didSelectRequest:(id)arg2;	// IMP=0x0010000000624d3f
- (void)rapRouteListViewControllerDidDismiss:(id)arg1;	// IMP=0x0010000000624c40
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000624bf0
- (void)routeFeedbackViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000000624af1
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x00100000006249b4
- (id)_routeFeedbackViewControllerForRequest:(id)arg1;	// IMP=0x00100000006247e5
- (void)_setupConstraints;	// IMP=0x001000000062444c
- (void)_setupViews;	// IMP=0x001000000062428d
- (void)viewDidLoad;	// IMP=0x0010000000624237
- (id)initWithReport:(id)arg1 directionsReportContext:(unsigned long long)arg2;	// IMP=0x0010000000623e8b

@end

