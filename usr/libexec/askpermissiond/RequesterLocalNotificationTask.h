//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@protocol RequestProtocol;

@interface RequesterLocalNotificationTask : AMSTask
{
    id <RequestProtocol> _request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001cf88
@property(readonly, nonatomic) id <RequestProtocol> request; // @synthesize request=_request;
- (id)perform;	// IMP=0x001000000001cd2a
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000001ccd5

@end
