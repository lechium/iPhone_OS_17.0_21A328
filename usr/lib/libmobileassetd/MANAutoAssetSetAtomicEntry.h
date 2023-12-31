//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetAtomicEntry : NSObject
{
    _Bool _inhibitedFromEmergencyRemoval;	// 8 = 0x8
    MAAutoAssetSelector *_fullAssetSelector;	// 16 = 0x10
    NSString *_assetID;	// 24 = 0x18
    NSURL *_localContentURL;	// 32 = 0x20
    NSDictionary *_assetAttributes;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000135b39
- (void).cxx_destruct;	// IMP=0x0000000000135e94
@property(nonatomic) _Bool inhibitedFromEmergencyRemoval; // @synthesize inhibitedFromEmergencyRemoval=_inhibitedFromEmergencyRemoval;
@property(retain, nonatomic) NSDictionary *assetAttributes; // @synthesize assetAttributes=_assetAttributes;
@property(retain, nonatomic) NSURL *localContentURL; // @synthesize localContentURL=_localContentURL;
@property(retain, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(retain, nonatomic) MAAutoAssetSelector *fullAssetSelector; // @synthesize fullAssetSelector=_fullAssetSelector;
- (id)summary;	// IMP=0x0000000000135c3f
- (id)description;	// IMP=0x0000000000135c2d
- (id)copy;	// IMP=0x0000000000135b41
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001359fd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001357a3
- (id)initWithFullAssetSelector:(id)arg1 withAssetID:(id)arg2 withLocalContentURL:(id)arg3 withAssetAttributes:(id)arg4 inhibitedFromEmergencyRemoval:(_Bool)arg5;	// IMP=0x00000000001356b3

@end

