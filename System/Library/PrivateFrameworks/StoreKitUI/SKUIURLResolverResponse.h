//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse;

__attribute__((visibility("hidden")))
@interface SKUIURLResolverResponse : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSHTTPURLResponse *_response;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069c11
@property(readonly, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_response;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 URLResponse:(id)arg2;	// IMP=0x0000000000069b21

@end

