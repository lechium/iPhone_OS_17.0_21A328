//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDPersonalizePassResult : NSObject
{
    NSString *_encodedSignature;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002e3880
@property(readonly, retain, nonatomic) NSString *encodedSignature; // @synthesize encodedSignature=_encodedSignature;
- (id)initWithSignatureData:(id)arg1;	// IMP=0x00100000002e37f9

@end

