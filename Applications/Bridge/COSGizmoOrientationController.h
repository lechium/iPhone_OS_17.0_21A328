//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSListController.h>

@class NPSDomainAccessor, NPSManager;

@interface COSGizmoOrientationController : BPSListController
{
    NPSDomainAccessor *_domainAccessor;	// 192 = 0xc0
    NPSManager *_syncManager;	// 200 = 0xc8
}

+ (id)wristChoice;	// IMP=0x0040000000042f7e
- (void).cxx_destruct;	// IMP=0x00200000000430a4
@property(retain, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000042c12
- (id)specifiers;	// IMP=0x0010000000042979
- (void)handleDidUnpair;	// IMP=0x0010000000042958
- (void)dealloc;	// IMP=0x001000000004286e
- (id)init;	// IMP=0x0010000000042777

@end

