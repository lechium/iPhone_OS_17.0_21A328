//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APHTTPSession, NSData, NSDictionary, NSMutableDictionary, NSString, NSURL, NSUUID;

@interface APHTTPRequest : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    long long _HTTPMethod;	// 24 = 0x18
    NSData *_HTTPBody;	// 32 = 0x20
    NSString *_serviceName;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
    NSMutableDictionary *_internalHTTPHeaderFields;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00100000000e8495
@property(retain, nonatomic) NSMutableDictionary *internalHTTPHeaderFields; // @synthesize internalHTTPHeaderFields=_internalHTTPHeaderFields;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSData *HTTPBody; // @synthesize HTTPBody=_HTTPBody;
@property(nonatomic) long long HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *allHTTPHeaderFields;
- (void)setRequestHeader:(id)arg1 withValue:(id)arg2;	// IMP=0x00100000000e8310
- (id)initWithURL:(id)arg1 HTTPMethod:(long long)arg2 HTTPHeaders:(id)arg3 HTTPBody:(id)arg4 serviceName:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e818e
- (id)initWithURL:(id)arg1 HTTPMethod:(long long)arg2 HTTPHeaders:(id)arg3 HTTPBody:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e8172
@property(nonatomic) unsigned long long retries; // @dynamic retries;
@property(copy, nonatomic) CDUnknownBlockType countExceededHandler; // @dynamic countExceededHandler;
@property(copy, nonatomic) CDUnknownBlockType originalCompletionHandler; // @dynamic originalCompletionHandler;
@property(retain, nonatomic) APHTTPSession *session; // @dynamic session;

@end

