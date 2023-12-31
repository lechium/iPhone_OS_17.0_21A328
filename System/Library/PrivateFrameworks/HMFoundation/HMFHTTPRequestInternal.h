//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class HMFActivity, NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HMFHTTPRequestInternal : HMFObject
{
    NSMutableDictionary *_headerFields;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSString *_method;	// 24 = 0x18
    NSData *_body;	// 32 = 0x20
    HMFActivity *_activity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004eb17
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)responseWithStatusCode:(long long)arg1;	// IMP=0x000000000004e9d4
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;	// IMP=0x000000000004e992
- (id)init;	// IMP=0x000000000004e8e3

@end

