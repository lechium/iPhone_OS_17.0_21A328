//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MonthViewController;

@interface PadShowEventWithAttendeesTest
{
    MonthViewController *_monthViewController;	// 16 = 0x10
    _Bool _eventDetailsDidAppear;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000109a68
- (void)_attendeesDidFinishLoading:(id)arg1;	// IMP=0x0010000000109978
- (void)_detailsDidAppear:(id)arg1;	// IMP=0x001000000010981c
- (void)runTest;	// IMP=0x00100000001090e1
- (id)_getEvent;	// IMP=0x00100000001090a9
- (void)_setupViewToDate:(id)arg1;	// IMP=0x0010000000108f7c
- (id)eventDetailsDidShowSubtestName;	// IMP=0x0010000000108f6f
- (_Bool)shouldWaitForAttendeeLoad;	// IMP=0x0010000000108f55
@property(readonly, nonatomic) long long numAttendees;

@end

