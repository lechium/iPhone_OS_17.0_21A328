//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMonitoredAccountStoreProxy : NSProxy
{
    NSString *_mediaType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003328d5
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000332846
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000003327e0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000033278a
- (id)initWithMediaType:(id)arg1;	// IMP=0x000000000033276a

@end

