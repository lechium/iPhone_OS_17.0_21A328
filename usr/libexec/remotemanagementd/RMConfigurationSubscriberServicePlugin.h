//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface RMConfigurationSubscriberServicePlugin : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_configurationTypes;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
}

+ (_Bool)_validPluginWithURL:(id)arg1;	// IMP=0x002000000002e7c1
+ (id)loadPlugins;	// IMP=0x001000000002e375
- (void).cxx_destruct;	// IMP=0x002000000002f27f
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSSet *configurationTypes; // @synthesize configurationTypes=_configurationTypes;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_serviceConnection;	// IMP=0x001000000002f1a6
- (void)fetchMissingConfigurationUIs;	// IMP=0x001000000002efa5
- (void)applyChangedConfigurationsTypes:(id)arg1;	// IMP=0x001000000002eda4
- (id)initWithURL:(id)arg1 identifier:(id)arg2 configurationTypes:(id)arg3;	// IMP=0x001000000002ebb7
- (id)initWithURL:(id)arg1;	// IMP=0x001000000002e879

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
