//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSURLConnection;

__attribute__((visibility("hidden")))
@interface QLThreadInvoker : NSObject
{
    NSURLConnection *_connection;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a619
- (void)connectionDidFailWithError:(id)arg1;	// IMP=0x000000000000a5f9
- (void)connectionDidReceiveDataLengthReceived:(id)arg1;	// IMP=0x000000000000a593
- (void)connectionDidReceiveData:(id)arg1;	// IMP=0x000000000000a573
- (id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3;	// IMP=0x000000000000a4bb

@end

