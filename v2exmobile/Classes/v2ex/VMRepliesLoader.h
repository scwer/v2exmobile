//
//  VMRepliesLoader.h
//  v2exmobile
//
//  Created by 徐 可 on 3/13/12.
//  Copyright (c) 2012 TVie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VMLoader.h"

@interface VMRepliesLoader : VMLoader
{
    BOOL redirectHandled;
//    NSURL *realTopicURL;
}

//@property (strong) NSURL *realTopicURL;

- (void)loadRepliesWithURL:(NSURL *)url;

@end