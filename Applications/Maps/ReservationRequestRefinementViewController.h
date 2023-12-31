//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSDate, NSDateFormatter, NSString, NSTimeZone, ReservationAnalyticsCaptor, RestaurantReservationAnalyticsBookingSession;
@protocol ReservationRequestRefinementViewControllerDelegate;

@interface ReservationRequestRefinementViewController : UITableViewController
{
    id <ReservationRequestRefinementViewControllerDelegate> _refinementDelegate;	// 8 = 0x8
    NSDateFormatter *_dateFormatter;	// 16 = 0x10
    unsigned long long _defaultPartySize;	// 24 = 0x18
    NSDate *_defaultDate;	// 32 = 0x20
    unsigned long long _minimumPartySize;	// 40 = 0x28
    unsigned long long _maximumPartySize;	// 48 = 0x30
    unsigned long long _previousPartySize;	// 56 = 0x38
    ReservationAnalyticsCaptor *_analyticsCaptor;	// 64 = 0x40
    NSTimeZone *_timeZone;	// 72 = 0x48
    RestaurantReservationAnalyticsBookingSession *_analyticsBookingSession;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000913ac2
@property(retain, nonatomic) RestaurantReservationAnalyticsBookingSession *analyticsBookingSession; // @synthesize analyticsBookingSession=_analyticsBookingSession;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) ReservationAnalyticsCaptor *analyticsCaptor; // @synthesize analyticsCaptor=_analyticsCaptor;
@property(nonatomic) unsigned long long previousPartySize; // @synthesize previousPartySize=_previousPartySize;
@property(nonatomic) unsigned long long maximumPartySize; // @synthesize maximumPartySize=_maximumPartySize;
@property(nonatomic) unsigned long long minimumPartySize; // @synthesize minimumPartySize=_minimumPartySize;
@property(retain, nonatomic) NSDate *defaultDate; // @synthesize defaultDate=_defaultDate;
@property(nonatomic) unsigned long long defaultPartySize; // @synthesize defaultPartySize=_defaultPartySize;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) __weak id <ReservationRequestRefinementViewControllerDelegate> refinementDelegate; // @synthesize refinementDelegate=_refinementDelegate;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) unsigned long long partySize;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000913741
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000913671
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000091327d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000913272
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000913267
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000009131f5
- (void)datePickerChanged;	// IMP=0x0010000000913177
- (void)stepperChanged:(id)arg1;	// IMP=0x0010000000913046
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000912ee1
- (void)configureNavBar;	// IMP=0x0010000000912e5b
- (void)configureTableView;	// IMP=0x0010000000912c82
- (void)viewDidLoad;	// IMP=0x0010000000912c2c
- (id)initWithDate:(id)arg1 partySize:(unsigned long long)arg2 minimumPartySize:(unsigned long long)arg3 maximumPartySize:(unsigned long long)arg4 analyticsCaptor:(id)arg5 timeZone:(id)arg6 analyticsBookingSession:(id)arg7;	// IMP=0x0010000000912ae1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

