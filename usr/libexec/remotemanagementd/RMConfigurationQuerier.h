//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface RMConfigurationQuerier : NSObject
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002c449
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (id)configurationsMissingUIByTypeForTypes:(id)arg1 managementSourceIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002b903
- (id)activeConfigurationsForManagementSourceIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002aeda
- (id)_activeConfigurationsByTypeForTypes:(id)arg1 managementSourceIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002a335
- (id)activeConfigurationsByTypeForTypes:(id)arg1 managementSourceIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002a323
- (id)activeConfigurationsByTypeForTypes:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002a30c
- (id)initWithPersistentContainer:(id)arg1;	// IMP=0x001000000002a2a1

@end
