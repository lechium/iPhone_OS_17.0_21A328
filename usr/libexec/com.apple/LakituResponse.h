//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSHTTPURLResponse, NSString;

@interface LakituResponse : NSObject
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSHTTPURLResponse *_httpResponse;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001aaa2
- (id)httpResponse;	// IMP=0x001000000001aa98
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, nonatomic) NSString *requestUUID;
- (id)initWithURLResponse:(id)arg1 data:(id)arg2;	// IMP=0x001000000001a48e
- (id)_parsePlistFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001a2d1

@end

