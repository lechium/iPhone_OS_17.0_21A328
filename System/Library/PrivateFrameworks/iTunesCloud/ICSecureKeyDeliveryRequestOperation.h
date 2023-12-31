//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICAsyncOperation.h"

@class ICSecureKeyDeliveryRequest;

__attribute__((visibility("hidden")))
@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation
{
    ICSecureKeyDeliveryRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d0eb4
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICSecureKeyDeliveryRequest *request; // @synthesize request=_request;
- (void)_createServerPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d0c5e
- (id)_createPodcastLicenseProtocolRequestBodyUsingPlaybackContextData:(id)arg1;	// IMP=0x00000000001d0a04
- (id)_createSimplifiedProtocolRequestBodyUsingPlaybackContextData:(id)arg1;	// IMP=0x00000000001d0779
- (id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)arg1;	// IMP=0x00000000001d03bd
- (void)execute;	// IMP=0x00000000001cfded

@end

