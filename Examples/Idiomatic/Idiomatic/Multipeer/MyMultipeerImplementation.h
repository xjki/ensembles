//
//  Multipeer.h
//  Idiomatic
//
//  Created by Florion on 20/06/2014.
//  Copyright (c) 2014 The Mental Faculty B.V. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

@class CDEMultipeerCloudFileSystem;

@interface MyMultipeerImplementation : NSObject

@property (nonatomic) CDEMultipeerCloudFileSystem *multipeerCloudFileSystem;

- (void)start;
- (void)stop;
- (void)synchronizeWithAllPeers;

@end