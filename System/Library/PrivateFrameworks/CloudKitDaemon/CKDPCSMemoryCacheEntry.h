//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject
{
    CKDPCSData *_pcsData;	// 8 = 0x8
    double _lastAccess;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007e0fb
@property double lastAccess; // @synthesize lastAccess=_lastAccess;
@property(retain, nonatomic) CKDPCSData *pcsData; // @synthesize pcsData=_pcsData;
- (id)description;	// IMP=0x000000000007e0b8
- (id)CKPropertiesDescription;	// IMP=0x000000000007df66
- (id)init;	// IMP=0x000000000007df11

@end

