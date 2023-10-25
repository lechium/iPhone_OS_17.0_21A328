//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSCopying;

@interface STResult : NSObject
{
    long long _type;	// 8 = 0x8
    NSObject<NSCopying> *_value;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (id)failure:(id)arg1;	// IMP=0x002000000008d034
+ (id)success;	// IMP=0x001000000008cfcc
+ (id)success:(id)arg1;	// IMP=0x001000000008cf46
- (void).cxx_destruct;	// IMP=0x002000000008da64
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSObject<NSCopying> *value; // @synthesize value=_value;
@property(readonly) long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x001000000008d992
- (_Bool)isEqualToResult:(id)arg1;	// IMP=0x001000000008d743
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008d6e0
- (id)flatMapError:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d5a0
- (id)mapError:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d4c5
- (id)flatMap:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d377
- (id)map:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d29c
- (void)evaluateWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d1e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008d195
- (id)description;	// IMP=0x001000000008d085
- (id)_initWithSuccessValue:(id)arg1 failureError:(id)arg2 type:(long long)arg3;	// IMP=0x001000000008ceae

@end
