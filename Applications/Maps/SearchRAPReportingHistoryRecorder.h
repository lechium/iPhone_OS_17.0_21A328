//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MKMapServiceSearchTicket;

@interface SearchRAPReportingHistoryRecorder : NSObject
{
    id <MKMapServiceSearchTicket> _ticket;	// 8 = 0x8
    long long _auxiliaryControlsOrigin;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000b16a41
@property(nonatomic) long long auxiliaryControlsOrigin; // @synthesize auxiliaryControlsOrigin=_auxiliaryControlsOrigin;
@property(retain, nonatomic) id <MKMapServiceSearchTicket> ticket; // @synthesize ticket=_ticket;
- (void)recordItemInHistory;	// IMP=0x0010000000b16973
- (id)initWithTicket:(id)arg1 auxiliaryControlsOrigin:(long long)arg2;	// IMP=0x0010000000b168fc

@end

