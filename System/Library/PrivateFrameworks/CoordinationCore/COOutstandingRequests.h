//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COStateUpdateRequest;

__attribute__((visibility("hidden")))
@interface COOutstandingRequests : NSObject
{
    COStateUpdateRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008ae8c
@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain) COStateUpdateRequest *request; // @synthesize request=_request;

@end

