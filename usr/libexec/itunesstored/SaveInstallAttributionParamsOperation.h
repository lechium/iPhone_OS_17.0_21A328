//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class InstallAttributionParams, NSString;

@interface SaveInstallAttributionParamsOperation : ISOperation
{
    InstallAttributionParams *_params;	// 96 = 0x60
    NSString *_originatingBundleId;	// 104 = 0x68
    _Bool _overrideCampaignLimit;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000019a3db
- (void)run;	// IMP=0x0010000000199668
- (id)initWithRequest:(id)arg1;	// IMP=0x00100000001993af

@end

