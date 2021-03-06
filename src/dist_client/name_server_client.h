/***************************************************************************
 * 
 * Copyright (c) 2015 aishuyu, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file name_server_client.h
 * @author aishuyu(asy5178@163.com)
 * @date 2015/02/22 22:00:23
 * @brief 
 *  
 **/




#ifndef  __NAME_SERVER_CLIENT_H_
#define  __NAME_SERVER_CLIENT_H_


#include <string>
#include <map>
#include <vector>

#include <boost/shared_ptr.hpp>

#include "distribute_alg.h"
#include "ketamadist_alg.h"
#include "rpc/rpc_channel.h"
#include "proto/name_serv.pb.h"

namespace dist_storage {

namespace dist_client {

class NameServerClient {
    public:
        NameServerClient();

        ~NameServerClient();

        // get info from name server
        bool GetBucketInfo(BUCKET_NODE_MAP& bucket_node_map);

        bool GetNodeInfo(std::vector<std::string>& node_list, std::string& ds_port);

    private:
        // get init paramters
        bool ClientInit();
        
    private:
         Channel* rpc_channel_ptr_;

         NameService::Stub* service_stub_ptr_;

};

}  // end of namespace dist_client

}  // end of namespace dist_storage









#endif  //__NAME_SERVER_CLIENT_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
