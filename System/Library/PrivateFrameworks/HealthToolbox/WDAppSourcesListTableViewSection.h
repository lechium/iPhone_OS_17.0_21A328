//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDSourcesListTableViewSection.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDAppSourcesListTableViewSection : WDSourcesListTableViewSection
{
    _Bool _uninstalledSourcesExist;	// 8 = 0x8
    NSArray *_installedSources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000054c7a
@property(nonatomic) _Bool uninstalledSourcesExist; // @synthesize uninstalledSourcesExist=_uninstalledSourcesExist;
@property(copy, nonatomic) NSArray *installedSources; // @synthesize installedSources=_installedSources;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005492a
- (id)_uninstalledSourcesCellWithTableView:(id)arg1;	// IMP=0x00000000000547b8
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;	// IMP=0x0000000000054672
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;	// IMP=0x00000000000544e1
- (id)noneString;	// IMP=0x0000000000054485
- (id)titleForFooter;	// IMP=0x0000000000054429
- (id)titleForHeader;	// IMP=0x00000000000543b3
- (unsigned long long)numberOfRows;	// IMP=0x0000000000054340
- (void)dataSourceDidUpdate;	// IMP=0x0000000000053d16

@end

