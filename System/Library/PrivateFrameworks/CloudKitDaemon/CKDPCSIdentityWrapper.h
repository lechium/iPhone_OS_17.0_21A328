//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDPCSIdentityWrapper : NSObject
{
    NSString *_identityString;	// 8 = 0x8
    struct _PCSIdentitySetData *_identitySet;	// 16 = 0x10
    NSString *_primaryServiceName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000322685
@property(readonly, nonatomic) NSString *primaryServiceName; // @synthesize primaryServiceName=_primaryServiceName;
@property(readonly, nonatomic) struct _PCSIdentitySetData *identitySet; // @synthesize identitySet=_identitySet;
@property(readonly, nonatomic) NSString *identityString; // @synthesize identityString=_identityString;
- (void)dealloc;	// IMP=0x0000000000322290
- (id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg1 withPrimaryServiceName:(id)arg2;	// IMP=0x000000000032220c

@end

