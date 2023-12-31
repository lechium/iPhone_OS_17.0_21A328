//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface COIDSMessageFactory : NSObject
{
    NSString *_meshName;	// 8 = 0x8
    NSString *_idsIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007b9ab
@property(readonly, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(readonly, nonatomic) NSString *meshName; // @synthesize meshName=_meshName;
- (id)decodeDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007b93b
- (id)encodeError:(id)arg1;	// IMP=0x000000000007b8ee
- (id)encodeResponse:(id)arg1;	// IMP=0x000000000007b8a1
- (id)encodeRequest:(id)arg1 withIDSIdentifier:(_Bool)arg2;	// IMP=0x000000000007b7bb
- (id)init;	// IMP=0x000000000007b76c

@end

